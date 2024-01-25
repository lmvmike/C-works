//
//  Input.h
//

#ifndef Input_h
#define Input_h

#include <stdio.h>
#include "MathVector.h"

class Input : public MathVector {
public:
    Input( );// delcaring inputs from user
    Input( double v, double delta );// delcaring inputs from user
    ~Input( ) { }
    Input( const Input& other );// delcaring inputs from user here data type
    double getV( );
    double getDeltaDot( );
};

#endif /* Input_h */
