//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol FBPullToRefreshContentViewProtocol;

@protocol FBCustomizablePullToRefreshContentPresenter <NSObject>
@property(nonatomic) __weak UIView<FBPullToRefreshContentViewProtocol> *view;
@property(nonatomic) long long uiState;
- (void)presentInBounds:(struct CGRect)arg1;
- (double)thresholdRefreshingHasCompletedToHidden;
- (double)thresholdHiddenToInitiating;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)updateInitiatingStateWithScrolledAmount:(double)arg1;
@end

