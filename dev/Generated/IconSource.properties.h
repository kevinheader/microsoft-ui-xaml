// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class IconSourceProperties
{
public:
    IconSourceProperties();

    void Foreground(winrt::Brush const& value);
    winrt::Brush Foreground();

    static winrt::DependencyProperty ForegroundProperty() { return s_ForegroundProperty; }

    static GlobalDependencyProperty s_ForegroundProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
