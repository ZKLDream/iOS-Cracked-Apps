//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDictionary, NSMutableArray, UILabel, UIView;

@interface CTTourSearchFilterLevelCell : UITableViewCell
{
    NSDictionary *_model;
    UILabel *_title;
    UILabel *_title1;
    UILabel *_title2;
    UILabel *_subTitle1;
    UILabel *_subTitle2;
    UIView *_line;
    NSMutableArray *_icons;
}

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(nonatomic) __weak UILabel *subTitle2; // @synthesize subTitle2=_subTitle2;
@property(nonatomic) __weak UILabel *subTitle1; // @synthesize subTitle1=_subTitle1;
@property(nonatomic) __weak UILabel *title2; // @synthesize title2=_title2;
@property(nonatomic) __weak UILabel *title1; // @synthesize title1=_title1;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

