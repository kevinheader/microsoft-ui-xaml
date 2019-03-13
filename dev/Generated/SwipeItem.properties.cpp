// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "SwipeItem.h"

CppWinRTActivatableClassWithDPFactory(SwipeItem)

GlobalDependencyProperty SwipeItemProperties::s_BackgroundProperty{ nullptr };
GlobalDependencyProperty SwipeItemProperties::s_BehaviorOnInvokedProperty{ nullptr };
GlobalDependencyProperty SwipeItemProperties::s_CommandProperty{ nullptr };
GlobalDependencyProperty SwipeItemProperties::s_CommandParameterProperty{ nullptr };
GlobalDependencyProperty SwipeItemProperties::s_ForegroundProperty{ nullptr };
GlobalDependencyProperty SwipeItemProperties::s_IconSourceProperty{ nullptr };
GlobalDependencyProperty SwipeItemProperties::s_TextProperty{ nullptr };

SwipeItemProperties::SwipeItemProperties()
    : m_invokedEventSource{static_cast<SwipeItem*>(this)}
{
    EnsureProperties();
}

void SwipeItemProperties::EnsureProperties()
{
    if (!s_BackgroundProperty)
    {
        s_BackgroundProperty =
            InitializeDependencyProperty(
                L"Background",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnBackgroundPropertyChanged));
    }
    if (!s_BehaviorOnInvokedProperty)
    {
        s_BehaviorOnInvokedProperty =
            InitializeDependencyProperty(
                L"BehaviorOnInvoked",
                winrt::name_of<winrt::SwipeBehaviorOnInvoked>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::SwipeBehaviorOnInvoked>::BoxValueIfNecessary(winrt::SwipeBehaviorOnInvoked::Auto),
                winrt::PropertyChangedCallback(&OnBehaviorOnInvokedPropertyChanged));
    }
    if (!s_CommandProperty)
    {
        s_CommandProperty =
            InitializeDependencyProperty(
                L"Command",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCommandPropertyChanged));
    }
    if (!s_CommandParameterProperty)
    {
        s_CommandParameterProperty =
            InitializeDependencyProperty(
                L"CommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnCommandParameterPropertyChanged));
    }
    if (!s_ForegroundProperty)
    {
        s_ForegroundProperty =
            InitializeDependencyProperty(
                L"Foreground",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnForegroundPropertyChanged));
    }
    if (!s_IconSourceProperty)
    {
        s_IconSourceProperty =
            InitializeDependencyProperty(
                L"IconSource",
                winrt::name_of<winrt::IconSource>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IconSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIconSourcePropertyChanged));
    }
    if (!s_TextProperty)
    {
        s_TextProperty =
            InitializeDependencyProperty(
                L"Text",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::SwipeItem>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTextPropertyChanged));
    }
}

void SwipeItemProperties::ClearProperties()
{
    s_BackgroundProperty = nullptr;
    s_BehaviorOnInvokedProperty = nullptr;
    s_CommandProperty = nullptr;
    s_CommandParameterProperty = nullptr;
    s_ForegroundProperty = nullptr;
    s_IconSourceProperty = nullptr;
    s_TextProperty = nullptr;
}

void SwipeItemProperties::OnBackgroundPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::OnBehaviorOnInvokedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::OnCommandPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::OnCommandParameterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::OnForegroundPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::OnIconSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::OnTextPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItem>();
    winrt::get_self<SwipeItem>(owner)->OnPropertyChanged(args);
}

void SwipeItemProperties::Background(winrt::Brush const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_BackgroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush SwipeItemProperties::Background()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_BackgroundProperty));
}

void SwipeItemProperties::BehaviorOnInvoked(winrt::SwipeBehaviorOnInvoked const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_BehaviorOnInvokedProperty, ValueHelper<winrt::SwipeBehaviorOnInvoked>::BoxValueIfNecessary(value));
}

winrt::SwipeBehaviorOnInvoked SwipeItemProperties::BehaviorOnInvoked()
{
    return ValueHelper<winrt::SwipeBehaviorOnInvoked>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_BehaviorOnInvokedProperty));
}

void SwipeItemProperties::Command(winrt::ICommand const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_CommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand SwipeItemProperties::Command()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_CommandProperty));
}

void SwipeItemProperties::CommandParameter(winrt::IInspectable const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_CommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable SwipeItemProperties::CommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_CommandParameterProperty));
}

void SwipeItemProperties::Foreground(winrt::Brush const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_ForegroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush SwipeItemProperties::Foreground()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_ForegroundProperty));
}

void SwipeItemProperties::IconSource(winrt::IconSource const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_IconSourceProperty, ValueHelper<winrt::IconSource>::BoxValueIfNecessary(value));
}

winrt::IconSource SwipeItemProperties::IconSource()
{
    return ValueHelper<winrt::IconSource>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_IconSourceProperty));
}

void SwipeItemProperties::Text(winrt::hstring const& value)
{
    static_cast<SwipeItem*>(this)->SetValue(s_TextProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring SwipeItemProperties::Text()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<SwipeItem*>(this)->GetValue(s_TextProperty));
}

winrt::event_token SwipeItemProperties::Invoked(winrt::TypedEventHandler<winrt::SwipeItem, winrt::SwipeItemInvokedEventArgs> const& value)
{
    return m_invokedEventSource.add(value);
}

void SwipeItemProperties::Invoked(winrt::event_token const& token)
{
    m_invokedEventSource.remove(token);
}
