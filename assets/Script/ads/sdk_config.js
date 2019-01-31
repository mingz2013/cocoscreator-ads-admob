
let config = {};

// 项目配置的一些基本信息
config.baseInfo = {
    debug: true, // 是否debug模式，上线必须设置为false

};

console.log("mode:debug=" + config.baseInfo.debug);




config.AdsConfig = {
    'bannerPos': 'BOTTOM_CENTER',
    isTest: config.baseInfo.debug, // 上线必须设置为false,否则不计算收益
    admobIds: {
        android: { // for Android
            banner: 'ca-app-pub-3180535698853578/6151398702',
            interstitial: 'ca-app-pub-3180535698853578/8366498509',
            rewardvideo: 'ca-app-pub-3180535698853578/5712415003',
        },
        ios: { // for iOS
            banner: 'ca-app-pub-3180535698853578/8600510219',
            interstitial: 'ca-app-pub-3180535698853578/2865801952',
            rewardvideo: 'ca-app-pub-3180535698853578/1932952092',
        },
        wp: { // for windows phone
            banner: '',
            interstitial: '',
            rewardvideo: '',
        },
    },
};






module.exports = config;

