// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TeachingTipTestHooks.h"

CppWinRTActivatableClassWithBasicFactory(TeachingTipTestHooks)


TeachingTipTestHooksProperties::TeachingTipTestHooksProperties()
    : m_effectiveBleedingPlacementChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_effectivePlacementChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_idleStatusChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_offsetChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
    , m_openedStatusChangedEventSource{static_cast<TeachingTipTestHooks*>(this)}
{
}

void TeachingTipTestHooksProperties::EnsureProperties()
{
}

void TeachingTipTestHooksProperties::ClearProperties()
{
}

winrt::event_token TeachingTipTestHooksProperties::EffectiveBleedingPlacementChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_effectiveBleedingPlacementChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::EffectiveBleedingPlacementChanged(winrt::event_token const& token)
{
    m_effectiveBleedingPlacementChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::EffectivePlacementChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_effectivePlacementChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::EffectivePlacementChanged(winrt::event_token const& token)
{
    m_effectivePlacementChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::IdleStatusChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_idleStatusChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::IdleStatusChanged(winrt::event_token const& token)
{
    m_idleStatusChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::OffsetChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_offsetChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::OffsetChanged(winrt::event_token const& token)
{
    m_offsetChangedEventSource.remove(token);
}

winrt::event_token TeachingTipTestHooksProperties::OpenedStatusChanged(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value)
{
    return m_openedStatusChangedEventSource.add(value);
}

void TeachingTipTestHooksProperties::OpenedStatusChanged(winrt::event_token const& token)
{
    m_openedStatusChangedEventSource.remove(token);
}
