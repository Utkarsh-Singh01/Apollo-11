void logicOp(int a, int b)
{
    /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/
    bool x = (a && b); // Logical AND 
    bool y = (a || b); // Logical OR
    bool z = (!a) && (!b); // Logical NOT on both a and b, then AND
    cout <<x << " " << y << " " << z << endl;
    
    }
