//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALCRoomViewer : FAModel
{
    _Bool _admin;
    _Bool _star;
    _Bool _isAdmin;
    unsigned long long _userId;
    NSString *_nickName;
    NSString *_userLogo;
    unsigned long long _richLevel;
    unsigned long long _shineLevel;
    unsigned long long _medalValue;
    unsigned long long _starLevel;
    long long _cloaking;
    long long _vipLevel;
    long long _kugouId;
    NSString *_nickname;
    long long _richlevel;
    long long _starlevel;
    unsigned long long _userid;
    NSString *_userlogo;
}

@property(retain, nonatomic) NSString *userlogo; // @synthesize userlogo=_userlogo;
@property(nonatomic) unsigned long long userid; // @synthesize userid=_userid;
@property(nonatomic) long long starlevel; // @synthesize starlevel=_starlevel;
@property(nonatomic) long long richlevel; // @synthesize richlevel=_richlevel;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long vipLevel; // @synthesize vipLevel=_vipLevel;
@property(nonatomic) long long cloaking; // @synthesize cloaking=_cloaking;
@property(nonatomic) unsigned long long starLevel; // @synthesize starLevel=_starLevel;
@property(nonatomic) unsigned long long medalValue; // @synthesize medalValue=_medalValue;
@property(nonatomic) unsigned long long shineLevel; // @synthesize shineLevel=_shineLevel;
@property(nonatomic) _Bool star; // @synthesize star=_star;
@property(nonatomic) _Bool admin; // @synthesize admin=_admin;
@property(nonatomic) unsigned long long richLevel; // @synthesize richLevel=_richLevel;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
