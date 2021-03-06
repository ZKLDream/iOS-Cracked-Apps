//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightRadioView, NSLayoutConstraint, NSString, UIButton, UILabel, UISwitch;

@interface CTFlightUseCarCouponSwitchCell : UITableViewCell
{
    double _ratio;
    NSString *alertShowTxt;
    _Bool _isOpen;
    UISwitch *_pSwitch;
    CDUnknownBlockType _isOpenCoupon;
    UIButton *_iconBtn;
    id <CTFlightUseCarCouponSwitchCellDelegate> _delegate;
    UILabel *_infoLabel;
    CTFlightRadioView *_bgView;
    NSLayoutConstraint *_separateLineHeight;
}

+ (double)heightOfUseCarCouponSwitchCell;
@property(nonatomic) __weak NSLayoutConstraint *separateLineHeight; // @synthesize separateLineHeight=_separateLineHeight;
@property(nonatomic) __weak CTFlightRadioView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak id <CTFlightUseCarCouponSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *iconBtn; // @synthesize iconBtn=_iconBtn;
@property(copy, nonatomic) CDUnknownBlockType isOpenCoupon; // @synthesize isOpenCoupon=_isOpenCoupon;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak UISwitch *pSwitch; // @synthesize pSwitch=_pSwitch;
- (void).cxx_destruct;
- (void)iconClickBtn:(id)arg1;
- (void)setupWithTxt:(id)arg1 status:(_Bool)arg2 alertTxt:(id)arg3;
- (void)toggleSwitch:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

