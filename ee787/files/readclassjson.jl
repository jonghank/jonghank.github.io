import JSON

#===============================================================================
| readclassjson(filename)
| takes the name of a JSON data file as input, and returns a dictionary
| containing the variables defined in the data file
===============================================================================#
function readclassjson(filename)
    #===========================================================================
    | create a dictionary of data types
    ===========================================================================#
    datatype_strings = Dict("Int64" => Int64 ,
                            "Float64" => Float64 ,
                            "String" => String)

    #===========================================================================
    | parse the JSON file
    ===========================================================================#
    raw_data = JSON.parsefile(filename)

    #===========================================================================
    | format the data
    ===========================================================================#
    formatted_data = Dict()
    for varname in keys(raw_data)
        #=======================================================================
        | get the type of the data
        =======================================================================#
        vartype = datatype_strings[raw_data[varname]["type"]]

        #=======================================================================
        | convert the data
        =======================================================================#
        vardata = raw_data[varname]["data"]
        if isa(vardata , Array)
            vartype = Array{vartype}
        end
        if isa(vardata[1] , Array)
            vardata = hcat(vardata...)'
        end
        vardata = convert(vartype , vardata)

        #=======================================================================
        | store the converted data
        =======================================================================#
        formatted_data[varname] = vardata
    end

    return formatted_data
end

