// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RecyclePoolProperties
{
public:
    RecyclePoolProperties();

    static void SetPoolInstance(winrt::DataTemplate const& target, winrt::RecyclePool const& value);
    static winrt::RecyclePool GetPoolInstance(winrt::DataTemplate const& target);

    static winrt::DependencyProperty PoolInstanceProperty() { return s_PoolInstanceProperty; }

    static GlobalDependencyProperty s_PoolInstanceProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
