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

#ifndef FL_TRAPEZOID_H
#define FL_TRAPEZOID_H

#include "fl/term/Term.h"

namespace fl {

    class FL_API Trapezoid : public Term {
    private:
        scalar _vertexA, _vertexB, _vertexC, _vertexD;
    public:
        explicit Trapezoid(const std::string& name = "",
                scalar vertexA = fl::nan,
                scalar vertexB = fl::nan,
                scalar vertexC = fl::nan,
                scalar vertexD = fl::nan,
                scalar height = 1.0);
        virtual ~Trapezoid() FL_IOVERRIDE;
        FL_DEFAULT_COPY_AND_MOVE(Trapezoid)

        virtual std::string className() const FL_IOVERRIDE;
        virtual std::string parameters() const FL_IOVERRIDE;
        virtual void configure(const std::string& parameters) FL_IOVERRIDE;

        virtual scalar membership(scalar x) const FL_IOVERRIDE;

        virtual void setVertexA(scalar a);
        virtual scalar getVertexA() const;

        virtual void setVertexB(scalar b);
        virtual scalar getVertexB() const;

        virtual void setVertexC(scalar c);
        virtual scalar getVertexC() const;

        virtual void setVertexD(scalar d);
        virtual scalar getVertexD() const;

        virtual Trapezoid* clone() const FL_IOVERRIDE;

        static Term* constructor();
    };

}
#endif /* FL_TRAPEZOID_H */
