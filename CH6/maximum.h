//maximum funciton teplate
//header
template <typename T> // or template <class T>
T maximum(T value1, T value2, T value3){
    T maximumValue{value1}; //assume value1 is maxValue

    //determine wheter value2 is greater than maxValue
    if(value2 > maximumValue){
        maximumValue = value2;
    }

    //determine wheter value3 is greatere trhan max value
    if(value3 > maximumValue){
        maximumValue = value3;
    }
    
    return maximumValue;
}