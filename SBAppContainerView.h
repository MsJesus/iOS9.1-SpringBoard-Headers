//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLayoutElementContainerView.h"

@class SBAppView;

@interface SBAppContainerView : SBLayoutElementContainerView
{
    SBAppView *_appView;
}

- (id)snapshotView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)setLayoutElementViewAlpha:(double)arg1;
- (unsigned long long)_supportedOrientations;
@property(retain, nonatomic) SBAppView *appView;
- (void)setDisplayMode:(long long)arg1;
- (long long)displayMode;
- (void)dealloc;

@end

