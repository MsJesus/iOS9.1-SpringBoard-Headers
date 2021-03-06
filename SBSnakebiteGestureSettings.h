//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@interface SBSnakebiteGestureSettings : _UISettings
{
    _Bool _showDebugRegions;
    double _maxDistanceFromDivider;
    double _maxHorizontalTouchDistance;
    double _minHorizontalTouchDistance;
    double _maxVerticalTouchDistance;
    double _maxSingleTouchDistanceFromDivider;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool showDebugRegions; // @synthesize showDebugRegions=_showDebugRegions;
@property(nonatomic) double maxSingleTouchDistanceFromDivider; // @synthesize maxSingleTouchDistanceFromDivider=_maxSingleTouchDistanceFromDivider;
@property(nonatomic) double maxVerticalTouchDistance; // @synthesize maxVerticalTouchDistance=_maxVerticalTouchDistance;
@property(nonatomic) double minHorizontalTouchDistance; // @synthesize minHorizontalTouchDistance=_minHorizontalTouchDistance;
@property(nonatomic) double maxHorizontalTouchDistance; // @synthesize maxHorizontalTouchDistance=_maxHorizontalTouchDistance;
@property(nonatomic) double maxDistanceFromDivider; // @synthesize maxDistanceFromDivider=_maxDistanceFromDivider;
- (void)setDefaultValues;

@end

