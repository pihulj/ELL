// PrintableCoordinatewise.h

#pragma once

#include "PrintableLayer.h"
#include "LayerLayout.h"

#include "Coordinatewise.h"

/// A struct that adds printing capabilities to a layer
///
struct PrintableCoordinatewise : public layers::Coordinatewise, public PrintableLayer
{
public:
    /// Ctor
    ///
    PrintableCoordinatewise(const layers::Coordinatewise::DoubleOperation& operation, layers::Layer::Type type);

    /// Prints a human-firiendly description of the underlying class to an output stream
    ///
    virtual LayerLayout Print(ostream& os, double left, double top, uint64 layerIndex, const PrintArguments& Arguments) const override;
};