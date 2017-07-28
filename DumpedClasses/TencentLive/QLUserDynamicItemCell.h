//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLUserCenterItemCell.h"

#import "P_QLPageItemCellShowUp.h"

@class NSString, QLJCEDynamicItemInfo, QLSImageView, UILabel;

@interface QLUserDynamicItemCell : QLUserCenterItemCell <P_QLPageItemCellShowUp>
{
    QLJCEDynamicItemInfo *_info;
    UILabel *_tipTextLabel;
    QLSImageView *_tipIconImageView;
}

@property(retain, nonatomic) QLSImageView *tipIconImageView; // @synthesize tipIconImageView=_tipIconImageView;
@property(retain, nonatomic) UILabel *tipTextLabel; // @synthesize tipTextLabel=_tipTextLabel;
@property(retain, nonatomic) QLJCEDynamicItemInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)layoutSubviews;
- (id)modelHeaderImageUrl;
- (id)modelSubTitle;
- (id)modelTitle;
- (_Bool)checkCellRedPoint:(id)arg1;
- (void)updateVersion:(id)arg1;
- (void)didSelectCell;
- (void)refreshRedDot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
