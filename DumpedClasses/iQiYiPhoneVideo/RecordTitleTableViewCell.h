//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface RecordTitleTableViewCell : UITableViewCell
{
    UIButton *_bgBtn;
    UIButton *_iconBtn;
    UILabel *_titleLab;
}

@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIButton *iconBtn; // @synthesize iconBtn=_iconBtn;
@property(retain, nonatomic) UIButton *bgBtn; // @synthesize bgBtn=_bgBtn;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

