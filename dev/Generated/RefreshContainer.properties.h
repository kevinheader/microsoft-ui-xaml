// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RefreshContainerProperties
{
public:
    RefreshContainerProperties();

    void PullDirection(winrt::RefreshPullDirection const& value);
    winrt::RefreshPullDirection PullDirection();

    void Visualizer(winrt::RefreshVisualizer const& value);
    winrt::RefreshVisualizer Visualizer();

    static winrt::DependencyProperty PullDirectionProperty() { return s_PullDirectionProperty; }
    static winrt::DependencyProperty VisualizerProperty() { return s_VisualizerProperty; }

    static GlobalDependencyProperty s_PullDirectionProperty;
    static GlobalDependencyProperty s_VisualizerProperty;

    winrt::event_token RefreshRequested(winrt::TypedEventHandler<winrt::RefreshContainer, winrt::RefreshRequestedEventArgs> const& value);
    void RefreshRequested(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::RefreshContainer, winrt::RefreshRequestedEventArgs>> m_refreshRequestedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
