%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Polynomial fit
% (implemented in matlab)
%
% EE370: Software lab, Kyung Hee University
% Jong-Han Kim (jonghank@khu.ac.kr)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clearvars;

%%%%%%%%%% load data

data = dlmread('fit_data.csv', ',');

u = data(:,1);
v = data(:,2);

figure('Units', 'inches', 'Position', [0 0 6 6]);
plot(u, v, 'o');
grid on;
axis square;
xlim([0, 1]);
ylim([0, 1]);
xlabel('$u$', 'Interpreter', 'latex');
ylabel('$v$', 'Interpreter', 'latex');
title('Raw data');
 
%%%%%%%%%% linear regression

n = length(u);
d = 6;

X = zeros(n,d);
for i = 1:d
  X(:,i) = u.^(i-1);
end

y = v;

theta_opt = X \ y;

disp(['Optimal theta:'])
disp(theta_opt')

vp = linspace(0, 1, 100);

X_vp = zeros(length(vp),d);
for i = 1:d
  X_vp(:,i) = vp.^(i-1);
end

figure('Units', 'inches', 'Position', [0 0 6 6]);
hold on;
plot(u, v, 'o');
plot(vp, X_vp*theta_opt);
grid on;
axis square;
xlim([0, 1]);
ylim([0, 1]);
xlabel('$u$', 'Interpreter', 'latex')
ylabel('$v$', 'Interpreter', 'latex')
title('Polynomial predictor')
legend('Raw data', 'Predictor')
