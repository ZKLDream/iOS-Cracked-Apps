//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CirclePercentView, UIColor, UIScrollView;

@interface AAPullToRefresh : UIView
{
    _Bool _isObserving;
    _Bool _isUserAction;
    unsigned long long _position;
    CirclePercentView *_circlePercentView;
    UIScrollView *_scrollView;
    CDUnknownBlockType _pullToRefreshHandler;
    double _threshold;
    UIColor *_borderColor;
    unsigned long long _state;
    double _progress;
    double _prevProgress;
    struct UIEdgeInsets _originalInset;
}

@property(nonatomic) double prevProgress; // @synthesize prevProgress=_prevProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isUserAction; // @synthesize isUserAction=_isUserAction;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(copy, nonatomic) CDUnknownBlockType pullToRefreshHandler; // @synthesize pullToRefreshHandler=_pullToRefreshHandler;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) CirclePercentView *circlePercentView; // @synthesize circlePercentView=_circlePercentView;
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) struct UIEdgeInsets originalInset; // @synthesize originalInset=_originalInset;
- (void).cxx_destruct;
- (void)manuallyTriggered;
- (void)stopIndicatorAnimation;
- (void)actionStopState;
- (void)actionTriggeredState;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setLayerHidden:(_Bool)arg1;
- (void)setLayerOpacity:(double)arg1;
@property(readonly, nonatomic) _Bool isSidePosition;
@property(nonatomic) _Bool showPullToRefresh;
- (void)willMoveToSuperview:(id)arg1;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1 handler:(CDUnknownBlockType)arg2;
- (void)resetScrollViewContentInset:(CDUnknownBlockType)arg1;
- (void)setupScrollViewContentInsetForLoadingIndicator:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)_commonInit;
- (id)initWithPosition:(unsigned long long)arg1;

@end

