/*
  ==============================================================================

    CustomButtons.h
    Created: 15 Feb 2023 4:26:15pm
    Author:  Markus

  ==============================================================================
*/

#pragma once
#include "PluginProcessor.h"

struct PowerButton : juce::ToggleButton {};
//==============================================================================
struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;

    juce::Path randomPath;
};
