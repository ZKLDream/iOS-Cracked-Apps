//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface QYDongleSettingNameCell : UITableViewCell
{
    NSString *_deviceDisplayName;
    UILabel *_label;
    UILabel *_rightLabel;
    UIImageView *_iv;
}

@property(retain, nonatomic) UIImageView *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *deviceDisplayName; // @synthesize deviceDisplayName=_deviceDisplayName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

