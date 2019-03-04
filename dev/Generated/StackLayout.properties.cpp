// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "StackLayout.h"

CppWinRTActivatableClassWithDPFactory(StackLayout)

GlobalDependencyProperty StackLayoutProperties::s_OrientationProperty{ nullptr };
GlobalDependencyProperty StackLayoutProperties::s_SpacingProperty{ nullptr };

StackLayoutProperties::StackLayoutProperties()
{
    EnsureProperties();
}

void StackLayoutProperties::EnsureProperties()
{
    if (!s_OrientationProperty)
    {
        s_OrientationProperty =
            InitializeDependencyProperty(
                L"Orientation",
                winrt::name_of<winrt::Orientation>(),
                winrt::name_of<winrt::StackLayout>(),
                false /* isAttached */,
                ValueHelper<winrt::Orientation>::BoxValueIfNecessary(winrt::Orientation::Vertical),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_SpacingProperty)
    {
        s_SpacingProperty =
            InitializeDependencyProperty(
                L"Spacing",
                winrt::name_of<double>(),
                winrt::name_of<winrt::StackLayout>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(0.0),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void StackLayoutProperties::ClearProperties()
{
    s_OrientationProperty = nullptr;
    s_SpacingProperty = nullptr;
}

void StackLayoutProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::StackLayout>();
    winrt::get_self<StackLayout>(owner)->OnPropertyChanged(args);
}

void StackLayoutProperties::Orientation(winrt::Orientation const& value)
{
    static_cast<StackLayout*>(this)->SetValue(s_OrientationProperty, ValueHelper<winrt::Orientation>::BoxValueIfNecessary(value));
}

winrt::Orientation StackLayoutProperties::Orientation()
{
    return ValueHelper<winrt::Orientation>::CastOrUnbox(static_cast<StackLayout*>(this)->GetValue(s_OrientationProperty));
}

void StackLayoutProperties::Spacing(double value)
{
    static_cast<StackLayout*>(this)->SetValue(s_SpacingProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double StackLayoutProperties::Spacing()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<StackLayout*>(this)->GetValue(s_SpacingProperty));
}
