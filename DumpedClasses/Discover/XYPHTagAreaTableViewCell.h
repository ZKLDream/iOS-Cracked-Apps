//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHExporeBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface XYPHTagAreaTableViewCell : XYPHExporeBaseTableViewCell
{
    UIImageView *_areaImageView;
    UILabel *_titleNameLabel;
    UILabel *_discoverTotalNameLabel;
}

+ (double)estimatedHeight;
@property(retain, nonatomic) UILabel *discoverTotalNameLabel; // @synthesize discoverTotalNameLabel=_discoverTotalNameLabel;
@property(retain, nonatomic) UILabel *titleNameLabel; // @synthesize titleNameLabel=_titleNameLabel;
@property(retain, nonatomic) UIImageView *areaImageView; // @synthesize areaImageView=_areaImageView;
- (void).cxx_destruct;
- (void)config:(id)arg1;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

