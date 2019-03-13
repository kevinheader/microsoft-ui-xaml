// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ParallaxView.h"

CppWinRTActivatableClassWithDPFactory(ParallaxView)

GlobalDependencyProperty ParallaxViewProperties::s_ChildProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_HorizontalShiftProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_HorizontalSourceEndOffsetProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_HorizontalSourceOffsetKindProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_HorizontalSourceStartOffsetProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_IsHorizontalShiftClampedProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_IsVerticalShiftClampedProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_MaxHorizontalShiftRatioProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_MaxVerticalShiftRatioProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_SourceProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_VerticalShiftProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_VerticalSourceEndOffsetProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_VerticalSourceOffsetKindProperty{ nullptr };
GlobalDependencyProperty ParallaxViewProperties::s_VerticalSourceStartOffsetProperty{ nullptr };

ParallaxViewProperties::ParallaxViewProperties()
{
    EnsureProperties();
}

void ParallaxViewProperties::EnsureProperties()
{
    if (!s_ChildProperty)
    {
        s_ChildProperty =
            InitializeDependencyProperty(
                L"Child",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnChildPropertyChanged));
    }
    if (!s_HorizontalShiftProperty)
    {
        s_HorizontalShiftProperty =
            InitializeDependencyProperty(
                L"HorizontalShift",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHorizontalShiftPropertyChanged));
    }
    if (!s_HorizontalSourceEndOffsetProperty)
    {
        s_HorizontalSourceEndOffsetProperty =
            InitializeDependencyProperty(
                L"HorizontalSourceEndOffset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHorizontalSourceEndOffsetPropertyChanged));
    }
    if (!s_HorizontalSourceOffsetKindProperty)
    {
        s_HorizontalSourceOffsetKindProperty =
            InitializeDependencyProperty(
                L"HorizontalSourceOffsetKind",
                winrt::name_of<winrt::ParallaxSourceOffsetKind>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<winrt::ParallaxSourceOffsetKind>::BoxValueIfNecessary(winrt::ParallaxSourceOffsetKind::Relative),
                winrt::PropertyChangedCallback(&OnHorizontalSourceOffsetKindPropertyChanged));
    }
    if (!s_HorizontalSourceStartOffsetProperty)
    {
        s_HorizontalSourceStartOffsetProperty =
            InitializeDependencyProperty(
                L"HorizontalSourceStartOffset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHorizontalSourceStartOffsetPropertyChanged));
    }
    if (!s_IsHorizontalShiftClampedProperty)
    {
        s_IsHorizontalShiftClampedProperty =
            InitializeDependencyProperty(
                L"IsHorizontalShiftClamped",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsHorizontalShiftClampedPropertyChanged));
    }
    if (!s_IsVerticalShiftClampedProperty)
    {
        s_IsVerticalShiftClampedProperty =
            InitializeDependencyProperty(
                L"IsVerticalShiftClamped",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsVerticalShiftClampedPropertyChanged));
    }
    if (!s_MaxHorizontalShiftRatioProperty)
    {
        s_MaxHorizontalShiftRatioProperty =
            InitializeDependencyProperty(
                L"MaxHorizontalShiftRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(1.0),
                winrt::PropertyChangedCallback(&OnMaxHorizontalShiftRatioPropertyChanged));
    }
    if (!s_MaxVerticalShiftRatioProperty)
    {
        s_MaxVerticalShiftRatioProperty =
            InitializeDependencyProperty(
                L"MaxVerticalShiftRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(1.0),
                winrt::PropertyChangedCallback(&OnMaxVerticalShiftRatioPropertyChanged));
    }
    if (!s_SourceProperty)
    {
        s_SourceProperty =
            InitializeDependencyProperty(
                L"Source",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSourcePropertyChanged));
    }
    if (!s_VerticalShiftProperty)
    {
        s_VerticalShiftProperty =
            InitializeDependencyProperty(
                L"VerticalShift",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnVerticalShiftPropertyChanged));
    }
    if (!s_VerticalSourceEndOffsetProperty)
    {
        s_VerticalSourceEndOffsetProperty =
            InitializeDependencyProperty(
                L"VerticalSourceEndOffset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnVerticalSourceEndOffsetPropertyChanged));
    }
    if (!s_VerticalSourceOffsetKindProperty)
    {
        s_VerticalSourceOffsetKindProperty =
            InitializeDependencyProperty(
                L"VerticalSourceOffsetKind",
                winrt::name_of<winrt::ParallaxSourceOffsetKind>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<winrt::ParallaxSourceOffsetKind>::BoxValueIfNecessary(winrt::ParallaxSourceOffsetKind::Relative),
                winrt::PropertyChangedCallback(&OnVerticalSourceOffsetKindPropertyChanged));
    }
    if (!s_VerticalSourceStartOffsetProperty)
    {
        s_VerticalSourceStartOffsetProperty =
            InitializeDependencyProperty(
                L"VerticalSourceStartOffset",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ParallaxView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnVerticalSourceStartOffsetPropertyChanged));
    }
}

void ParallaxViewProperties::ClearProperties()
{
    s_ChildProperty = nullptr;
    s_HorizontalShiftProperty = nullptr;
    s_HorizontalSourceEndOffsetProperty = nullptr;
    s_HorizontalSourceOffsetKindProperty = nullptr;
    s_HorizontalSourceStartOffsetProperty = nullptr;
    s_IsHorizontalShiftClampedProperty = nullptr;
    s_IsVerticalShiftClampedProperty = nullptr;
    s_MaxHorizontalShiftRatioProperty = nullptr;
    s_MaxVerticalShiftRatioProperty = nullptr;
    s_SourceProperty = nullptr;
    s_VerticalShiftProperty = nullptr;
    s_VerticalSourceEndOffsetProperty = nullptr;
    s_VerticalSourceOffsetKindProperty = nullptr;
    s_VerticalSourceStartOffsetProperty = nullptr;
}

void ParallaxViewProperties::OnChildPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnHorizontalShiftPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnHorizontalSourceEndOffsetPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnHorizontalSourceOffsetKindPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnHorizontalSourceStartOffsetPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnIsHorizontalShiftClampedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnIsVerticalShiftClampedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnMaxHorizontalShiftRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnMaxVerticalShiftRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnVerticalShiftPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnVerticalSourceEndOffsetPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnVerticalSourceOffsetKindPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::OnVerticalSourceStartOffsetPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ParallaxView>();
    winrt::get_self<ParallaxView>(owner)->OnPropertyChanged(args);
}

void ParallaxViewProperties::Child(winrt::UIElement const& value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_ChildProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ParallaxViewProperties::Child()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_ChildProperty));
}

void ParallaxViewProperties::HorizontalShift(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_HorizontalShiftProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::HorizontalShift()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_HorizontalShiftProperty));
}

void ParallaxViewProperties::HorizontalSourceEndOffset(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_HorizontalSourceEndOffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::HorizontalSourceEndOffset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_HorizontalSourceEndOffsetProperty));
}

void ParallaxViewProperties::HorizontalSourceOffsetKind(winrt::ParallaxSourceOffsetKind const& value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_HorizontalSourceOffsetKindProperty, ValueHelper<winrt::ParallaxSourceOffsetKind>::BoxValueIfNecessary(value));
}

winrt::ParallaxSourceOffsetKind ParallaxViewProperties::HorizontalSourceOffsetKind()
{
    return ValueHelper<winrt::ParallaxSourceOffsetKind>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_HorizontalSourceOffsetKindProperty));
}

void ParallaxViewProperties::HorizontalSourceStartOffset(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_HorizontalSourceStartOffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::HorizontalSourceStartOffset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_HorizontalSourceStartOffsetProperty));
}

void ParallaxViewProperties::IsHorizontalShiftClamped(bool value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_IsHorizontalShiftClampedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ParallaxViewProperties::IsHorizontalShiftClamped()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_IsHorizontalShiftClampedProperty));
}

void ParallaxViewProperties::IsVerticalShiftClamped(bool value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_IsVerticalShiftClampedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ParallaxViewProperties::IsVerticalShiftClamped()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_IsVerticalShiftClampedProperty));
}

void ParallaxViewProperties::MaxHorizontalShiftRatio(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_MaxHorizontalShiftRatioProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::MaxHorizontalShiftRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_MaxHorizontalShiftRatioProperty));
}

void ParallaxViewProperties::MaxVerticalShiftRatio(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_MaxVerticalShiftRatioProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::MaxVerticalShiftRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_MaxVerticalShiftRatioProperty));
}

void ParallaxViewProperties::Source(winrt::UIElement const& value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_SourceProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ParallaxViewProperties::Source()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_SourceProperty));
}

void ParallaxViewProperties::VerticalShift(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_VerticalShiftProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::VerticalShift()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_VerticalShiftProperty));
}

void ParallaxViewProperties::VerticalSourceEndOffset(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_VerticalSourceEndOffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::VerticalSourceEndOffset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_VerticalSourceEndOffsetProperty));
}

void ParallaxViewProperties::VerticalSourceOffsetKind(winrt::ParallaxSourceOffsetKind const& value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_VerticalSourceOffsetKindProperty, ValueHelper<winrt::ParallaxSourceOffsetKind>::BoxValueIfNecessary(value));
}

winrt::ParallaxSourceOffsetKind ParallaxViewProperties::VerticalSourceOffsetKind()
{
    return ValueHelper<winrt::ParallaxSourceOffsetKind>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_VerticalSourceOffsetKindProperty));
}

void ParallaxViewProperties::VerticalSourceStartOffset(double value)
{
    static_cast<ParallaxView*>(this)->SetValue(s_VerticalSourceStartOffsetProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ParallaxViewProperties::VerticalSourceStartOffset()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ParallaxView*>(this)->GetValue(s_VerticalSourceStartOffsetProperty));
}
