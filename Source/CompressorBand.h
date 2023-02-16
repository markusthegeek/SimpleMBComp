/*
  ==============================================================================

    CompressorBand.h
    Created: 15 Feb 2023 4:51:45pm
    Author:  Markus

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

struct CompressorBand
{
public:
    juce::AudioParameterFloat* attack{ nullptr };
    juce::AudioParameterFloat* release{ nullptr };
    juce::AudioParameterFloat* threshold{ nullptr };
    juce::AudioParameterChoice* ratio{ nullptr };
    juce::AudioParameterBool* bypassed{ nullptr };
    juce::AudioParameterBool* mute{ nullptr };
    juce::AudioParameterBool* solo{ nullptr };

    void prepare(const juce::dsp::ProcessSpec& spec);

    void updateCopressorSettings();
    
    void process(juce::AudioBuffer<float>& buffer);
private:
    juce::dsp::Compressor<float> compressor;
};
