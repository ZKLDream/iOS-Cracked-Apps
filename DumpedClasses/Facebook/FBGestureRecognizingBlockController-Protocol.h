//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;
@protocol FBGestureTouchProvider;

@protocol FBGestureRecognizingBlockController <NSObject>
- (_Bool)canRespondToGestureInDirection:(long long)arg1 withTouches:(id <FBGestureTouchProvider>)arg2;

@optional
- (void)requireGestureRecognizerToFailBeforeZooming:(UIGestureRecognizer *)arg1;
@end

