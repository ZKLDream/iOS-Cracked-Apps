//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QYCardData, UIButton, UIImageView, UILabel, UIView;
@protocol qyplayerHotTopicDetailCellDelegate;

@interface QYPlayerHotTopicDetailCell : UITableViewCell
{
    _Bool _isfold;
    id <qyplayerHotTopicDetailCellDelegate> _delegate;
    QYCardData *_detailData;
    UIImageView *_leftImageView;
    UILabel *_topicLabel;
    UILabel *_readNumLabel;
    UILabel *_commentNumlabel;
    UIView *_midLine;
    UILabel *_detailInfoLabel;
    UIButton *_foldBtn;
    double _unfoldSizeHeight;
    UIView *_containerView;
    UIView *_gestrueBg;
}

+ (double)getCellHeight:(id)arg1 WithFold:(_Bool)arg2;
@property(retain, nonatomic) UIView *gestrueBg; // @synthesize gestrueBg=_gestrueBg;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double unfoldSizeHeight; // @synthesize unfoldSizeHeight=_unfoldSizeHeight;
@property(retain, nonatomic) UIButton *foldBtn; // @synthesize foldBtn=_foldBtn;
@property(retain, nonatomic) UILabel *detailInfoLabel; // @synthesize detailInfoLabel=_detailInfoLabel;
@property(retain, nonatomic) UIView *midLine; // @synthesize midLine=_midLine;
@property(retain, nonatomic) UILabel *commentNumlabel; // @synthesize commentNumlabel=_commentNumlabel;
@property(retain, nonatomic) UILabel *readNumLabel; // @synthesize readNumLabel=_readNumLabel;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) _Bool isfold; // @synthesize isfold=_isfold;
@property(retain, nonatomic) QYCardData *detailData; // @synthesize detailData=_detailData;
@property(nonatomic) __weak id <qyplayerHotTopicDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)foldButtonClicked:(id)arg1;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

