//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TightTableViewCell.h"

#import "NearbyGroupTagViewDelegate.h"

@class NSString, NearbyInterestScrollView, UILabel, UIView;

@interface NearbyShownGroupCell : TightTableViewCell <NearbyGroupTagViewDelegate>
{
    NearbyInterestScrollView *_scrollView;
    UILabel *_titleLabel;
    UIView *_separateView;
    long long _maxTagCountLimit;
    int _tagStyle;
    int _xo;
}

- (void)didSelectedTagView:(id)arg1;
- (void)moreClick;
- (void)showGroup;
- (void)configure:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long maxTagCountLimit; // @dynamic maxTagCountLimit;
@property(readonly) Class superclass;
@property(nonatomic) int tagStyle; // @dynamic tagStyle;

@end
