//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, KQSearchHistoryEntity;

@interface KQSearchKeywordTBVCell : UITableViewCell
{
    KQSearchHistoryEntity *_seachHistoryEntity;
    KGThemeLabel *_nameLab;
    KGThemeLine *_bottomLineV;
    KGThemeButton *_deletBtn;
    id <KQSearchKeywordDelegate> _delegate;
}

@property(nonatomic) id <KQSearchKeywordDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KGThemeButton *deletBtn; // @synthesize deletBtn=_deletBtn;
@property(retain, nonatomic) KGThemeLine *bottomLineV; // @synthesize bottomLineV=_bottomLineV;
@property(retain, nonatomic) KGThemeLabel *nameLab; // @synthesize nameLab=_nameLab;
- (void).cxx_destruct;
- (void)deleBtnEvent:(id)arg1;
- (void)contentConfig:(id)arg1;
- (void)layoutSubviews;
- (void)initSelectView;
- (void)createViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
