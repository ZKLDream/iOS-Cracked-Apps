//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DBDRouteModel, DCRichLabel, NSIndexPath, UIImageView, UILabel, UIView;

@interface DBDRoutesTableViewCell : UITableViewCell
{
    _Bool _edit;
    _Bool _editSelected;
    UIView *_subContentView;
    DBDRouteModel *_routeModel;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _tappedPushTip;
    CDUnknownBlockType _tapped;
    DCRichLabel *_pushTipLabel;
    DCRichLabel *_fromRouteLabel;
    DCRichLabel *_toRouteLabel;
    DCRichLabel *_routeNameLabel;
    UILabel *_timeLabel;
    UIView *_line;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) DCRichLabel *routeNameLabel; // @synthesize routeNameLabel=_routeNameLabel;
@property(retain, nonatomic) DCRichLabel *toRouteLabel; // @synthesize toRouteLabel=_toRouteLabel;
@property(retain, nonatomic) DCRichLabel *fromRouteLabel; // @synthesize fromRouteLabel=_fromRouteLabel;
@property(retain, nonatomic) DCRichLabel *pushTipLabel; // @synthesize pushTipLabel=_pushTipLabel;
@property(copy, nonatomic) CDUnknownBlockType tapped; // @synthesize tapped=_tapped;
@property(copy, nonatomic) CDUnknownBlockType tappedPushTip; // @synthesize tappedPushTip=_tappedPushTip;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool editSelected; // @synthesize editSelected=_editSelected;
@property(nonatomic) _Bool edit; // @synthesize edit=_edit;
@property(retain, nonatomic) DBDRouteModel *routeModel; // @synthesize routeModel=_routeModel;
@property(retain, nonatomic) UIView *subContentView; // @synthesize subContentView=_subContentView;
- (void).cxx_destruct;
- (void)setup;
- (void)tapAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

