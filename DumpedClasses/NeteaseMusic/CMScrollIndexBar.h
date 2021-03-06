//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CMIndexBarDelegate.h"

@class CMIndexBar, NSArray, NSString;

@interface CMScrollIndexBar : UIView <CMIndexBarDelegate>
{
    _Bool _indexBarTouched;
    CMIndexBar *_indexBar;
    struct CGRect _parentFrame;
    struct UIEdgeInsets _contentInset;
    id <CMScrollIndexBarDelegate> _delegate;
    long long _sectionIndexMinimumDisplayRowCount;
    long long _displayRowCount;
    NSArray *_indexArray;
}

+ (double)width;
@property(retain, nonatomic) NSArray *indexArray; // @synthesize indexArray=_indexArray;
@property(nonatomic) long long displayRowCount; // @synthesize displayRowCount=_displayRowCount;
@property(nonatomic) long long sectionIndexMinimumDisplayRowCount; // @synthesize sectionIndexMinimumDisplayRowCount=_sectionIndexMinimumDisplayRowCount;
@property(nonatomic) id <CMScrollIndexBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideIndexBarWithAnimation;
- (void)hideIndexBarWithNoDelay;
- (void)hideIndexBarWithDelay;
- (void)cancelHideIndexBar;
- (void)showIndexBarWithAnimation;
- (void)hideWithNoDelay;
- (void)cmScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)cmScrollViewDidEndDecelerating:(id)arg1;
- (void)indexSelectionDidEnd:(id)arg1;
- (void)indexSelectionDidChange:(id)arg1 index:(int)arg2 title:(id)arg3;
- (void)configureFrame;
- (void)showInView:(id)arg1 frame:(struct CGRect)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (double)dynamicMarginBottom;
- (double)dynamicMarginTop;
- (void)setupIndexArray:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

