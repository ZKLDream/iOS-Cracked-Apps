//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface KMRadioInfoEntity : NSObject
{
    long long _is_end;
    NSMutableArray *_radioList;
    long long _page;
    NSString *_sKeyword;
}

@property(copy, nonatomic) NSString *sKeyword; // @synthesize sKeyword=_sKeyword;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *radioList; // @synthesize radioList=_radioList;
@property(nonatomic) long long is_end; // @synthesize is_end=_is_end;
- (void).cxx_destruct;
- (id)init;

@end

