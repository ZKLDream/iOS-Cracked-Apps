//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface QLMomentTickCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIButton *_tickButton;
}

+ (double)cellDefaultHeight;
@property(retain, nonatomic) UIButton *tickButton; // @synthesize tickButton=_tickButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)didPressTickButtonAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

