/*
  ==============================================================================

    CustomButtons.cpp
    Created: 15 Feb 2023 4:26:15pm
    Author:  Markus

  ==============================================================================
*/

#include "CustomButtons.h"

void AnalyzerButton::resized()
{
    auto bounds = getLocalBounds();
    auto insetRect = bounds.reduced(4);

    randomPath.clear();

    juce::Random r;

    randomPath.startNewSubPath(
        insetRect.getX(),
        insetRect.getY() + insetRect.getHeight() * r.nextFloat()
    );

    for (auto x = insetRect.getX() + 1; x < insetRect.getRight(); x += 2)
    {
        randomPath.lineTo(
            x,
            insetRect.getY() + insetRect.getHeight() * r.nextFloat()
        );
    }
}