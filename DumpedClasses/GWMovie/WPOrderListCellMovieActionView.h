//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface WPOrderListCellMovieActionView : UIView
{
    UILabel *_timeLabel;
    UIButton *_statusButton;
    UIButton *_ticketPaperButton;
    double _actionViewHeightConstraint;
    NSString *_statusString;
}

@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) double actionViewHeightConstraint; // @synthesize actionViewHeightConstraint=_actionViewHeightConstraint;
@property(retain, nonatomic) UIButton *ticketPaperButton; // @synthesize ticketPaperButton=_ticketPaperButton;
@property(retain, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setUpWithMovieOrderModel:(id)arg1;
- (void)setUpViews;
- (id)init;

@end

