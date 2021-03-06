//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "QYMMovieOrderInfoViewDelegate-Protocol.h"

@class NSString, QYMMovieOrderInfoView, QYMMovieOrderPayView, QYMMovieOrderPrintView, UIImageView, UIView;
@protocol QYMMovieOrderListCellDelegate;

@interface QYMMovieOrderListCell : UITableViewCell <QYMMovieOrderInfoViewDelegate>
{
    id <QYMMovieOrderListCellDelegate> _delegate;
    QYMMovieOrderInfoView *_orderInfoView;
    QYMMovieOrderPayView *_orderPayView;
    QYMMovieOrderPrintView *_orderPrintView;
    UIView *_editView;
    UIImageView *_editStautsIcon;
}

+ (double)getMovieOrderListCellHeight:(long long)arg1;
+ (id)createMovieOrderListCell:(id)arg1 orderType:(long long)arg2;
@property(retain, nonatomic) UIImageView *editStautsIcon; // @synthesize editStautsIcon=_editStautsIcon;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) QYMMovieOrderPrintView *orderPrintView; // @synthesize orderPrintView=_orderPrintView;
@property(retain, nonatomic) QYMMovieOrderPayView *orderPayView; // @synthesize orderPayView=_orderPayView;
@property(retain, nonatomic) QYMMovieOrderInfoView *orderInfoView; // @synthesize orderInfoView=_orderInfoView;
@property(nonatomic) __weak id <QYMMovieOrderListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoMovieDetail:(id)arg1;
- (void)refreshMovieOrderSelectStatus:(_Bool)arg1 OrderType:(long long)arg2;
- (void)layoutMovieOrderCell:(long long)arg1;
- (void)updataMovieOrderData:(id)arg1 OrderType:(long long)arg2;
- (void)initTpyeViewFromOrderType:(long long)arg1;
- (void)initEditView;
- (void)initMoviePrintView;
- (void)initMoviePayView;
- (void)initMovieOrderInfoView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

