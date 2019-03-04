// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "SwipeItems.h"

CppWinRTActivatableClassWithDPFactory(SwipeItems)

GlobalDependencyProperty SwipeItemsProperties::s_ModeProperty{ nullptr };

SwipeItemsProperties::SwipeItemsProperties()
{
    EnsureProperties();
}

void SwipeItemsProperties::EnsureProperties()
{
    if (!s_ModeProperty)
    {
        s_ModeProperty =
            InitializeDependencyProperty(
                L"Mode",
                winrt::name_of<winrt::SwipeMode>(),
                winrt::name_of<winrt::SwipeItems>(),
                false /* isAttached */,
                ValueHelper<winrt::SwipeMode>::BoxValueIfNecessary(winrt::SwipeMode::Reveal),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void SwipeItemsProperties::ClearProperties()
{
    s_ModeProperty = nullptr;
}

void SwipeItemsProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::SwipeItems>();
    winrt::get_self<SwipeItems>(owner)->OnPropertyChanged(args);
}

void SwipeItemsProperties::Mode(winrt::SwipeMode const& value)
{
    static_cast<SwipeItems*>(this)->SetValue(s_ModeProperty, ValueHelper<winrt::SwipeMode>::BoxValueIfNecessary(value));
}

winrt::SwipeMode SwipeItemsProperties::Mode()
{
    return ValueHelper<winrt::SwipeMode>::CastOrUnbox(static_cast<SwipeItems*>(this)->GetValue(s_ModeProperty));
}
