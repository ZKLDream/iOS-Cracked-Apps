//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface ONEProductGridViewItemModel : JSONModel
{
    NSString *_displayName;
    NSString *_iconImageName;
    NSString *_cornerText;
    long long _cornerType;
    NSString *_menuId;
    NSNumber *_cornerIconId;
}

+ (id)modelWithDisplayName:(id)arg1 iconImageName:(id)arg2 cornerText:(id)arg3 cornerType:(long long)arg4 menuId:(id)arg5;
@property(copy, nonatomic) NSNumber *cornerIconId; // @synthesize cornerIconId=_cornerIconId;
@property(copy, nonatomic) NSString *menuId; // @synthesize menuId=_menuId;
@property(nonatomic) long long cornerType; // @synthesize cornerType=_cornerType;
@property(copy, nonatomic) NSString *cornerText; // @synthesize cornerText=_cornerText;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end
