/*
  ==============================================================================

    UtilityComponents.h
    Created: 15 Feb 2023 4:29:12pm
    Author:  Markus

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();

    void paint(juce::Graphics& g) override;

    juce::Colour customColor;
};
//==============================================================================
struct RotarySlider : juce::Slider
{
    RotarySlider();
};
