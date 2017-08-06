//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface ONEWebActionView : UIView
{
    id <ONEWebActionViewDelegate> _delegate;
    double _animationDuration;
    double _actionHeight;
}

@property(nonatomic) double actionHeight; // @synthesize actionHeight=_actionHeight;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) __weak id <ONEWebActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewWithTag:(long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dismissForRotateScreen;
- (void)dismissForTapOverlayView;
- (void)didDismiss;
- (void)willDismiss;
- (void)didPresent;
- (void)willPresent;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)didReceiveApplicationWillChangeStatusBarOrientationNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
