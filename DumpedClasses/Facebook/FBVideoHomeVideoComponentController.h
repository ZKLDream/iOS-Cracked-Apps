//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponentController.h>

#import "FBComponentControllerWorkingRangeListenerProviding-Protocol.h"
#import "FBVideoPlaybackEventListener-Protocol.h"

@class FBConsistentLookasideCacheObservationHandle, NSString;

@interface FBVideoHomeVideoComponentController : CKComponentController <FBComponentControllerWorkingRangeListenerProviding, FBVideoPlaybackEventListener>
{
    FBConsistentLookasideCacheObservationHandle *_clcHandleStory;
    FBConsistentLookasideCacheObservationHandle *_clcHandleNotification;
}

- (void).cxx_destruct;
- (void)_clcDidUpdateNotification:(id)arg1;
- (void)_clcDidUpdateStory:(id)arg1;
- (void)_addCLCObserver;
- (void)_removeBrick;
- (void)_setupAutoplayTracking;
- (void)_willStartLiveToVODTransitionAction;
- (void)videoPlaybackControllerDidStartPlayback:(id)arg1;
- (id)workingRangeListenerForComponent:(id)arg1;
- (void)_highlight:(_Bool)arg1;
- (void)_didStopPlaying;
- (void)_didStartPlaying;
- (id)_component;
- (void)componentTreeDidDisappear;
- (void)willUnmount;
- (void)didRemount;
- (void)didMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

