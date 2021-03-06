//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGThemeButton.h"

@class NSArray, NSMutableArray;

@interface KGSegmentView : KGThemeButton
{
    long long _selectedIndex;
    NSArray *_items;
    NSMutableArray *_subViews;
    CDUnknownBlockType _touch;
}

@property(copy, nonatomic) CDUnknownBlockType touch; // @synthesize touch=_touch;
@property(retain, nonatomic) NSMutableArray *subViews; // @synthesize subViews=_subViews;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)cancleAllBtnSelectedStatus;
- (void)updateBtnStatus;
- (void)setSelectedStatusWithIndex:(long long)arg1;
- (void)btnHandler:(id)arg1;
- (void)setupItems:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 touch:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

