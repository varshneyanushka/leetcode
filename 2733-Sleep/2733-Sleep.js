// Last updated: 07/11/2025, 19:56:30
/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    return new Promise((resolve, reject) => { setTimeout(() => { console.log("hello"); resolve(200); }, millis); });
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */