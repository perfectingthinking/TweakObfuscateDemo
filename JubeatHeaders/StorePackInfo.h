//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSString, SKProduct;

@interface StorePackInfo : NSObject
{
    _Bool _isNew;
    _Bool _hasExtend;
    int _packID;
    NSString *_artworkURL;
    NSString *_packName;
    NSString *_comment;
    NSString *_shortComment;
    NSString *_copyright;
    NSString *_linkURL;
    NSString *_linkTitle;
    NSArray *_musicInfos;
    SKProduct *_product;
    NSDecimalNumber *_regularPriceJPY;
}

@property(readonly, nonatomic) NSDecimalNumber *regularPriceJPY; // @synthesize regularPriceJPY=_regularPriceJPY;
@property(readonly, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(readonly, nonatomic) NSArray *musicInfos; // @synthesize musicInfos=_musicInfos;
@property(readonly, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(readonly, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(readonly, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(readonly, nonatomic) NSString *shortComment; // @synthesize shortComment=_shortComment;
@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) NSString *packName; // @synthesize packName=_packName;
@property(readonly, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(readonly, nonatomic) _Bool hasExtend; // @synthesize hasExtend=_hasExtend;
@property(readonly, nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(readonly, nonatomic) int packID; // @synthesize packID=_packID;
- (void).cxx_destruct;
- (_Bool)setMusicInfo:(id)arg1;
- (_Bool)setPackDetailInfo:(id)arg1;
- (void)setPackInfo:(id)arg1;
- (id)getArtworkURL:(id)arg1;
- (id)attributedPriceString;
- (id)priceString;
- (id)initWithDictionary:(id)arg1 product:(id)arg2;

@end
