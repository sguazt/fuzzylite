/*
 Author: Juan Rada-Vilela, Ph.D.
 Copyright © 2010-2015 FuzzyLite Limited.
 All rights reserved.

 This file is part of fuzzylite®.

 fuzzylite® is free software: you can redistribute it and/or modify it under
 the terms of the FuzzyLite License included with the software.

 You should have received a copy of the FuzzyLite License along with 
 fuzzylite®. If not, see <http://www.fuzzylite.com/license/>.

 fuzzylite® is a registered trademark of FuzzyLite Limited.

 */

#ifndef FL_TNORM_H
#define FL_TNORM_H

#include "fl/norm/Norm.h"

namespace fl {

    class FL_API TNorm : public Norm {
    public:

        TNorm() {
        }

        virtual ~TNorm() FL_IOVERRIDE {
        }

        FL_DEFAULT_COPY_AND_MOVE(TNorm)

        virtual TNorm* clone() const FL_IOVERRIDE = 0;
    };
}
#endif  /* TNORM_H */

