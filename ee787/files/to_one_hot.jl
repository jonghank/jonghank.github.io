function to_one_hot(u)
    idx_to_category = unique(u)
    category_to_idx = Dict(idx_to_category[i] => i for i = 1:length(idx_to_category))
    X_one_hot = zeros(length(u), length(idx_to_category))

    for i = 1:length(u)
        X_one_hot[i, category_to_idx[u[i]]] = 1
    end

    return X_one_hot
end
