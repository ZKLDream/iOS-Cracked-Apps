//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UILabel;

@interface CTFlightSemgentItemView : UIView
{
    id <CTFlightSemgentItemViewDelegate> _delegate;
    UILabel *_labelTitle;
    UIView *_viewDot;
    UILabel *_labelSubtitle;
    NSLayoutConstraint *_titleTopSpaceCons;
}

@property(retain, nonatomic) NSLayoutConstraint *titleTopSpaceCons; // @synthesize titleTopSpaceCons=_titleTopSpaceCons;
@property(retain, nonatomic) UILabel *labelSubtitle; // @synthesize labelSubtitle=_labelSubtitle;
@property(retain, nonatomic) UIView *viewDot; // @synthesize viewDot=_viewDot;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(nonatomic) __weak id <CTFlightSemgentItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btnClick:(id)arg1;
- (void)resetTitleColor:(id)arg1 subtitleColor:(id)arg2 dotColor:(id)arg3;
- (void)setViewWithTitle:(id)arg1 subtitle:(id)arg2 titleColor:(id)arg3 subtitleColor:(id)arg4 titleFont:(id)arg5 subtitleFont:(id)arg6 dotColor:(id)arg7;
- (void)initView;
- (void)awakeFromNib;

@end

