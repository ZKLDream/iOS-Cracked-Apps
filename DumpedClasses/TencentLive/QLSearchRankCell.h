//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseCell.h"

@class QLJCERankItem, UIImageView, UILabel;

@interface QLSearchRankCell : QLBaseCell
{
    QLJCERankItem *_rankItem;
    UIImageView *_orderImage;
    UILabel *_orderLabel;
    UILabel *_viderName;
    UIImageView *_sortImage;
}

@property(retain, nonatomic) UIImageView *sortImage; // @synthesize sortImage=_sortImage;
@property(retain, nonatomic) UILabel *viderName; // @synthesize viderName=_viderName;
@property(retain, nonatomic) UILabel *orderLabel; // @synthesize orderLabel=_orderLabel;
@property(retain, nonatomic) UIImageView *orderImage; // @synthesize orderImage=_orderImage;
@property(retain, nonatomic) QLJCERankItem *rankItem; // @synthesize rankItem=_rankItem;
- (void).cxx_destruct;
- (void)setMarkLabelList:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

