//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

@class UIButton, UIImageView, UILabel, XYFollowButton, XYPHBoard;

@interface XYPHBoardDetailViewController : XYPHBaseViewController
{
    UIButton *_editButton;
    XYPHBoard *_board;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_userPortrait;
    UILabel *_descLabel;
    UILabel *_illegalInfoLabel;
    XYFollowButton *_followButton;
}

@property(retain, nonatomic) XYFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *illegalInfoLabel; // @synthesize illegalInfoLabel=_illegalInfoLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *userPortrait; // @synthesize userPortrait=_userPortrait;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak XYPHBoard *board; // @synthesize board=_board;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
- (void)setViewWithEditStatus:(_Bool)arg1;
- (void)updateFollowButton;
- (void)followButtonClicked;
- (double)computeheight:(id)arg1 withViewWidth:(double)arg2;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithBoard:(id)arg1;

@end
