//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVideoEffectCommon.h"

@interface QQVideoOverlaySession : QQVideoEffectCommon
{
}

- (void)rotation90Degrees:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)p_applyVideoOverlay:(id)arg1 point:(struct CGPoint)arg2 toComposition:(id)arg3 size:(struct CGSize)arg4;
- (void)addOverLay:(id)arg1 point:(struct CGPoint)arg2 toAssetAsynchronously:(CDUnknownBlockType)arg3;

@end
