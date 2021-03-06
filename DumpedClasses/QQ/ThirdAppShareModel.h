//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString, UIImage;

@interface ThirdAppShareModel : QQModel
{
    _Bool _isShowSource;
    _Bool _needCheckAppInfo;
    _Bool _fromThirdAppShare;
    unsigned int _appShareId;
    int _shareToType;
    int _msgType;
    long long _step;
    NSString *_title;
    NSString *_preDesc;
    NSString *_richMsgPreFileType;
    UIImage *_previewImage;
    NSString *_previewImageUrl;
    NSString *_serverPreviewImageUrl;
    NSString *_avFlashUrl;
    NSString *_previewImageDataPath;
    NSString *_previewFileType;
    NSString *_actionUrl;
    NSString *_sourceName;
    NSString *_iconUrl;
    NSString *_bigIconUrl;
    NSString *_sourceUrl;
    NSString *_appBundleID;
    NSArray *_shortUrlKeyArr;
}

@property(nonatomic) _Bool fromThirdAppShare; // @synthesize fromThirdAppShare=_fromThirdAppShare;
@property(nonatomic) _Bool needCheckAppInfo; // @synthesize needCheckAppInfo=_needCheckAppInfo;
@property(nonatomic) _Bool isShowSource; // @synthesize isShowSource=_isShowSource;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSArray *shortUrlKeyArr; // @synthesize shortUrlKeyArr=_shortUrlKeyArr;
@property(retain, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSString *bigIconUrl; // @synthesize bigIconUrl=_bigIconUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *previewFileType; // @synthesize previewFileType=_previewFileType;
@property(retain, nonatomic) NSString *previewImageDataPath; // @synthesize previewImageDataPath=_previewImageDataPath;
@property(retain, nonatomic) NSString *avFlashUrl; // @synthesize avFlashUrl=_avFlashUrl;
@property(retain, nonatomic) NSString *serverPreviewImageUrl; // @synthesize serverPreviewImageUrl=_serverPreviewImageUrl;
@property(retain, nonatomic) NSString *previewImageUrl; // @synthesize previewImageUrl=_previewImageUrl;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) NSString *richMsgPreFileType; // @synthesize richMsgPreFileType=_richMsgPreFileType;
@property(retain, nonatomic) NSString *preDesc; // @synthesize preDesc=_preDesc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int shareToType; // @synthesize shareToType=_shareToType;
@property(nonatomic) unsigned int appShareId; // @synthesize appShareId=_appShareId;
@property(nonatomic) long long step; // @synthesize step=_step;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)serialize;
- (_Bool)checkUTF8String:(id)arg1;
- (id)creatXMLMessageForDiscussGroupLinkShared;
- (id)creatXMLMessageString;
- (id)getNeedChangeUrlArray;
- (_Bool)needActionUrlRich;
- (_Bool)needUploadPreviewImage;

@end

