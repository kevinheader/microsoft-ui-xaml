// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ElementAnimatorProperties
{
public:
    ElementAnimatorProperties();



    winrt::event_token BoundsChangeAnimationCompleted(winrt::ElementAnimationCompleted const& value);
    void BoundsChangeAnimationCompleted(winrt::event_token const& token);
    winrt::event_token HideAnimationCompleted(winrt::ElementAnimationCompleted const& value);
    void HideAnimationCompleted(winrt::event_token const& token);
    winrt::event_token ShowAnimationCompleted(winrt::ElementAnimationCompleted const& value);
    void ShowAnimationCompleted(winrt::event_token const& token);

    event_source<winrt::ElementAnimationCompleted> m_boundsChangeAnimationCompletedEventSource;
    event_source<winrt::ElementAnimationCompleted> m_hideAnimationCompletedEventSource;
    event_source<winrt::ElementAnimationCompleted> m_showAnimationCompletedEventSource;

    static void EnsureProperties();
    static void ClearProperties();
};
